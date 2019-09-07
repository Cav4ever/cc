#include "accessFactory.h"
#include "sqlFactory.h"

int main()
{
   User user;
   Department department;
   OperationFactory *factory;
   //factory = new SqlFactory();
   factory = new AccessFactory();
   OperationUser *operationUser = factory->createUser();
   OperationDepartment *operationDepartment = factory->createDepartment();
   operationUser->insertUser(user);
   operationUser->getUser(1);
   operationDepartment->insertDepartment(department);
   operationDepartment->getDepartment(1);

   delete factory;
   delete operationUser;
   delete operationDepartment;
    return 0;
}