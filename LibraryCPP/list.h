#ifndef LIST_H
#define LIST_H

#include <string> 

typedef std::string Data;

struct ListItem {
    Data data;
    ListItem* next;
};

struct List {
    ListItem* head;
};

List* list_create();
void list_delete(List* list);
ListItem* list_first(List* list);
Data list_item_data(const ListItem* item);
ListItem* list_item_next(ListItem* item);


ListItem* list_insert(List* list, Data data);

ListItem* list_insert_after(List* list, ListItem* item, Data data);
ListItem* list_erase_first(List* list);
ListItem* list_erase_next(ListItem* item);

#endif