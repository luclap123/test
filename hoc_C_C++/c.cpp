#include <stdio.h>
#include <iostream>
using namespace std;

// create a linked list
struct node {
  int data;
  struct node *next;
};

// tính tổng a và b
int sum(int a, int b) {
  return a + b;
}
// chèn danh sách liên kết đơn vào cuối
void insert_end(struct node **head, int data) {
  struct node *new_node = new node;
  new_node->data = data;
  new_node->next = NULL;
  if (*head == NULL) {
    *head = new_node;
  } else {
    struct node *temp = *head;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = new_node;
  }
}
// chèn danh sách liên kết đơn vào đầu
void insert_begin(struct node **head, int data) {
  struct node *new_node = new node;
  new_node->data = data;
  new_node->next = NULL;
  if (*head == NULL) {
    *head = new_node;
  } else {
    new_node->next = *head;
    *head = new_node;
  }
}
// tính chu vi hình tròn
float perimeter(float r) {
  return 2 * 3.14 * r;
}

 