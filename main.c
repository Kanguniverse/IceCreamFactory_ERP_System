#include "head.h"

void main() {
	comp_head = (company*)malloc(sizeof(company));
	emp_head = (employee*)malloc(sizeof(employee));
	comp_tail = comp_head;
	emp_tail = emp_head;
	sample();
	if (login() == -1) {
		system("cls");
		printf("���α׷� ����");
	}
	switch (main_menu()) {
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	}
}