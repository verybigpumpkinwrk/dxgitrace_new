#include <stdint.h>
#include <stdio.h>

struct func{
	char* name;
	uint32_t param_num;
};

#include "d3d11/ID3D11Device.h"
#include "d3d11/ID3D11DeviceContext.h"

char* interface_name = "ID3D11DeviceContext";
struct func* func_table = ID3D11DeviceContext_func_table;
uint32_t funcs_num = ID3D11DeviceContextFuncsNum;


int main(int argc, char* argv[])
{
	FILE* fp = 0;

	fp = fopen("output.txt", "wb");
	if(fp == 0){
		printf("Error! Can't open file for writing.\n");
		return -1;
	}
	// enum
	fprintf(fp, "enum %sFuncs{\n", interface_name);

	for(uint32_t i = 0; i < funcs_num; i++){
		fprintf(fp, "\t%s_%s,\n", interface_name, func_table[i].name);
	}

	fprintf(fp, "\n\t%s__EnumEnd,\n};\n\n", interface_name);
	// original funcs table
	fprintf(fp, "static void* %sOriginalFuncs[%s__EnumEnd] = { NULL };\n\n", interface_name, interface_name);

	// simple functions
	for(uint32_t i = 0; i < funcs_num; i++){
		fprintf(fp, "static void* __stdcall W%s_%s(void* param0", interface_name, func_table[i].name);

		for(uint32_t p = 1; p < func_table[i].param_num; p++){
			fprintf(fp, ", void* param%u", p);
		}

		fprintf(fp, ")\n{\n");
		fprintf(fp, "\tFileWriter_Reserve(8);\n");
		fprintf(fp, "\tFileWriter_WriteImmediate4(IncrementCounter());\n");
		fprintf(fp, "\tFileWriter_WriteImmediate4(MAKE_FUNC_ID(TRACE_SIMPLE, %s, %s_%s));\n", interface_name, interface_name, func_table[i].name);
		fprintf(fp, "\treturn ((void* (__stdcall *)(void*");

		for(uint32_t p = 1; p < func_table[i].param_num; p++){
			fprintf(fp, ", void*");
		}
		
		fprintf(fp, "))%sOriginalFuncs[%s_%s])(param0", interface_name, interface_name, func_table[i].name);

		for(uint32_t p = 1; p < func_table[i].param_num; p++){
			fprintf(fp, ", param%u", p);
		}

		fprintf(fp, ");\n}\n\n");
	}

	fprintf(fp, "\n\n");
	// Simple functions table
	fprintf(fp, "void* %sSimpleFuncs[%s__EnumEnd] = {\n", interface_name, interface_name);

	for(uint32_t i = 0; i < funcs_num; i++){
		fprintf(fp, "\tW%s_%s, \n", interface_name, func_table[i].name);
	}

	fprintf(fp, "};\n\n");


	fclose(fp);
	return 0;
}