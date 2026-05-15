```json
{
	// Place your snippets for c here. Each snippet is defined under a snippet name and has a prefix, body and 
	// description. The prefix is what is used to trigger the snippet and the body will be expanded and inserted. Possible variables are:
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. Placeholders with the 
	// same ids are connected.

	// Example: 1 : boiler plate code for
	"Snippet c boiler plate code": {
		"prefix": "c boiler plate code",
		"body": [
			"#include<stdio.h>",
			"int main(){",
				"\t$3",
			"\treturn 0;",
			"}",
		],
		"description": "Log output to console"
	},
	// Example: 2 : for printf
	"Snippet #include<stdlib.h>": {
		"prefix": "libaryfunction",
		"body": [
			"#include<stdlib.h>$1",
		],
		"description": "Log output to console"
	},
	 // Example: 3 : for printf
	"Snippet #include<math.h>": {
		"prefix": "math",
		"body": [
			"#include<math.h>$1",
		],
		"description": "Log output to console"
	},
	 // Example: 4 : for printf
	 "Snippet #include<string.h>": {
		"prefix": "string",
		"body": [
			"#include<math.h>$1",
		],
		"description": "Log output to console"
	},
	// Example: 5 : for printf
	"Snippet printf": {
		"prefix": "printf",
		"body": [
			"printf(\"$1\\n\"$2);$3",
		],
		"description": "Log output to console"
	},
	// Example: 6 : for scanf
	"Snippet scanf": {
		"prefix": "scanf",
		"body": [
			"scanf(\"%$1\",&$2);",
		],
		"description": "Log output to console"
	},
	// Example: 4 : for if 
	// "Print if ": {
	// 	"prefix": "if ",
	// 	"body": [
			
	// 	],
	// 	"description": "Log output to console"
	// },
}
```