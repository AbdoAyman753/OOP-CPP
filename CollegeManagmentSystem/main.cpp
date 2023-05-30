#include <iostream>
#include "College.h"
#include "Assistant.h"
#include "Professor.h"
using namespace std;

int main()
{
    College college(20);
	Professor*  professor_1 = new Professor();            //Create a professor object
	Assistant* assistant_1 = new Assistant();              // Create an assistant object.

    college.addStuffMember(professor_1);
    college.addStuffMember(assistant_1);

    college.putData();
    college.getData();
    delete professor_1;
    delete assistant_1;

    return 0;
}
