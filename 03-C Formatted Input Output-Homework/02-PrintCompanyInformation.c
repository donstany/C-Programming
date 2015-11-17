#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 30
/*
 * A company has name, address, phone number, fax number, web site and manager.
 * The manager has first name, last name, age and a phone number. Write
 * a program that reads the information about a company and its manager
 * and prints it back on the console.
 */
int main() 
{
    char companyName[BUFFER_SIZE],
            companyAddress[BUFFER_SIZE],
            companyPhoneNumber[BUFFER_SIZE],
            companyFaxNumber[BUFFER_SIZE],
            companyWebSite[BUFFER_SIZE],
            managerFirstName[BUFFER_SIZE],
            managerLastName[BUFFER_SIZE],
            managerPhoneNumber[BUFFER_SIZE],
            managerAge[BUFFER_SIZE];
    
    printf("Company name: ");
    fgets(companyName, BUFFER_SIZE, stdin);
    printf("Company address: ");
    fgets(companyAddress, BUFFER_SIZE, stdin);
    printf("Phone number: ");
    fgets(companyPhoneNumber, BUFFER_SIZE, stdin);
    printf("Fax number: ");
    fgets(companyFaxNumber, BUFFER_SIZE, stdin);
    if (companyFaxNumber[0] == '\n')
    {
        strncpy(companyFaxNumber, "(no fax)\n", 9);
    }
    
    printf("Web site: ");
    fgets(companyWebSite, BUFFER_SIZE, stdin);
    printf("Manager first name: ");
    fgets(managerFirstName, BUFFER_SIZE, stdin);
    size_t firstNameLength = strlen(managerFirstName) - 1;
    if (managerFirstName[firstNameLength] == '\n')
    {
        managerFirstName[firstNameLength] = '\0';
    }
    
    printf("Manager last name: ");
    fgets(managerLastName, BUFFER_SIZE, stdin);
    size_t lastNameLength = strlen(managerLastName) - 1;
    if (managerLastName[lastNameLength] == '\n')
    {
        managerLastName[lastNameLength] = '\0';
    }
    
    printf("Manager age: ");
    fgets(managerAge, BUFFER_SIZE, stdin);
    size_t ageLength = strlen(managerAge) - 1;
    if (managerAge[ageLength] == '\n')
    {
        managerAge[ageLength] = '\0';
    }
    
    printf("Manager phone: ");
    fgets(managerPhoneNumber, BUFFER_SIZE, stdin);   
    size_t phoneLength = strlen(managerPhoneNumber) - 1;
    if (managerPhoneNumber[phoneLength] == '\n')
    {
        managerPhoneNumber[phoneLength] = '\0';
    }
    
    printf("%sAddress: %sTel. %sFax: %sWeb site: %sManager: %s %s (age: %s, tel. %s)",
            companyName,
            companyAddress,
            companyPhoneNumber,
            companyFaxNumber,
            companyWebSite,
            managerFirstName,
            managerLastName,
            managerAge,
            managerPhoneNumber);    
    
    return 0;
}

