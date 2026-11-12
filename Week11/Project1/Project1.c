# include <stdio.h>

int main() {
	char str[100];
	int space = 0;
	printf("영문 문장을 입력하십시오: ");
	if (fgets(str, sizeof(str), stdin) == NULL) {
		return 1;
	}
	str[strcspn(str, "\n")] = '\0';
	for (char* p = str; *p != '\0'; p++) {
		if (*p >= 'A' && *p <= 'Z') {
			*p = *p + 32;
		}
		if (*p == ' ') {
			space++;
		}
	}
	printf("소문자 : %s\n", str);
	printf("글자 수 (공백 제외) : %lu\n", strlen(str) - space);
}