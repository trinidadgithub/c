/* Filename:  xorEncryption.c
 * This program demostrates the use of the XOR encryption. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* XORCipher(char* data, char* key, int dataLen, int keyLen);

char* text = "The quick brown fox jumps over the lazy dog.";
char* key = "secret";
int dataLen;
int keyLen;
char* cipherText;
char* plainText;

	
main()
{
	dataLen = strlen(text);
	keyLen = strlen(key);
	cipherText = XORCipher(text, key, dataLen, keyLen);
	plainText = XORCipher(cipherText, key, dataLen, keyLen);

	printf("\ncipherText: %s", cipherText);
	printf("\nplainText: %s", plainText);
}
char* XORCipher(char* data, char* key, int dataLen, int keyLen) {
	char* output = (char*)malloc(sizeof(char) * dataLen);

	for (int i = 0; i < dataLen; ++i) {
		output[i] = data[i] ^ key[i % keyLen];
	}

	return output;
}
