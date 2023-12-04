#include<stdio.h>
#include<string.h>

struct Student{
	char name[50],numberPhone[20],email[30];
	int age;
};
void inputStudent(struct Student *st){	
	printf("Nhap ho ten: ");
	scanf("%49[^\n]",st->name);
	printf("Nhap tuoi: ");
	scanf("%d",&st->age);
	printf("Nhap sdt: ");
	scanf("%s",st->numberPhone);
	printf("Nhap email: ");
	scanf("%s",st->email);
}
void outputStudent(struct Student *st){
	printf("Ho va ten: %s\nTuoi: %d\nDo sien thoai: %s\nEmail: %s\n",st->name, st->age, st->numberPhone,st->email);
}
int main(){
	struct Student st;
	inputStudent(&st);
	outputStudent(&st);
}