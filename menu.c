#include "head.h"

int main_menu() {
	char menu_list[5][MENU_LENGTH];
	char pre_print[] = "ERP SYSTEM ����\n\n";
	char after_print[] = "\0";
	strcpy(menu_list[0], "ǰ�����");
	strcpy(menu_list[1], "�����ȹ");
	strcpy(menu_list[2], "���������ȸ");
	return Menu_select(pre_print,menu_list,after_print,3);
}