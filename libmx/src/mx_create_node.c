#include "../inc/libmx.h" 
t_list *mx_create_node(void *data){
    struct s_list *NEWnode = NULL;
    NEWnode = (t_list*)malloc(sizeof(struct s_list));
    NEWnode->data = data;
    NEWnode->next = NULL;
    return NEWnode;
}
