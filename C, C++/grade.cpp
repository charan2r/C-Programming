#include<stdio.h>
#include<assert.h>
char grade(int marks);
void testgrade();
int main()
{
   testgrade();
   return 0;	
}

char grade(int marks){

   char result;
   if (marks < 0)
      result = 'X';
   if (marks < 40)
      result = 'F';
   else if (marks < 60)
      result = 'C';
   else if (marks < 75)
      result = 'B';
   else if (marks <= 100)
      result = 'A';
   else
      result = 'X'; // Error (invalid mark)
   return result;
}
void testgrade(){
	assert(grade(0) == 'F');
    assert(grade(40) == 'C');
    assert(grade(60) == 'B');
    assert(grade(75) == 'A');
    assert(grade(100) == 'A');
    printf("%dgrade() unit tests passed\n");

}

