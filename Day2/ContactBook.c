#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct contact {
    char name[20];
    long Fnumber;
    char email[50];
};

void show(struct contact user) {
    printf("Name : %s\n", user.name);
    printf("Contact Number : %ld\n", user.Fnumber);
    printf("Email : %s\n", user.email);
}

void searchAndPrint(struct contact users[], int size, const char* name) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(users[i].name, name) == 0) {
            show(users[i]);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Contact with name %s not found.\n", name);
    }
}

void deleteContact(struct contact users[], int *size, const char* name) {
    int found = 0;
    for (int i = 0; i < *size; i++) {
        if (strcmp(users[i].name, name) == 0) {
            found = 1;
            for (int j = i; j < *size - 1; j++) {
                users[j] = users[j + 1];
            }
            (*size)--;
            break;
        }
    }
    if (found) {
        printf("Contact with name %s has been deleted.\n", name);
    } else {
        printf("Contact with name %s not found.\n", name);
    }
}

void addContact(struct contact **users, int *size, const char *name, long Fnumber, const char *email) {
    *users = realloc(*users, (*size + 1) * sizeof(struct contact));
    if (*users == NULL) {
        perror("Failed to add contact");
        exit(EXIT_FAILURE);
    }
    strcpy((*users)[*size].name, name);
    (*users)[*size].Fnumber = Fnumber;
    strcpy((*users)[*size].email, email);
    (*size)++;
}

int main() {
    struct contact *users = NULL;
    int size = 0;
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Search contact\n");
        printf("2. Delete contact\n");
        printf("3. Add contact\n");
        printf("4. Show all contacts\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // To consume newline character

        char name[20];
        long Fnumber;
        char email[50];

        switch (choice) {
            case 1:
                printf("Enter the name to search: ");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = 0;
                searchAndPrint(users, size, name);
                break;

            case 2:
                printf("Enter the name to delete: ");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = 0;
                deleteContact(users, &size, name);
                break;

            case 3:
                printf("Enter name: ");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = 0;
                printf("Enter contact number: ");
                scanf("%ld", &Fnumber);
                getchar();  
                printf("Enter email: ");
                fgets(email, sizeof(email), stdin);
                email[strcspn(email, "\n")] = 0;
                addContact(&users, &size, name, Fnumber, email);
                break;

            case 4:
                printf("\nContact List:\n");
                for (int i = 0; i < size; i++) {
                    show(users[i]);
                    printf("\n");
                }
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice, please try again.\n");
        }
    } while (choice != 5);


    free(users);

    return 0;
}
