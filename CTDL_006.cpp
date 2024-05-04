#include <iostream>
#include <unordered_set>

// Định nghĩa cấu trúc cho một nút trong danh sách liên kết đơn
struct Node
{
  int data;
  Node *next;
  Node(int value) : data(value), next(nullptr) {}
};

// Hàm để thêm một phần tử vào cuối danh sách
void append(Node *&head, int value)
{
  Node *new_node = new Node(value);
  if (head == nullptr)
  {
    head = new_node;
  }
  else
  {
    Node *current = head;
    while (current->next != nullptr)
    {
      current = current->next;
    }
    current->next = new_node;
  }
}

// Hàm để lọc các phần tử trùng và chỉ để lại một phần tử đại diện cho mỗi nhóm trùng
void filterDuplicates(Node *&head)
{
  if (head == nullptr)
  {
    return;
  }

  std::unordered_set<int> seen_values;
  Node *current = head;
  Node *prev = nullptr;

  while (current != nullptr)
  {
    if (seen_values.find(current->data) != seen_values.end())
    {
      // Nếu giá trị đã xuất hiện trước đó, xóa nút này ra khỏi danh sách
      prev->next = current->next;
      delete current;
      current = prev->next;
    }
    else
    {
      // Nếu giá trị chưa được thấy, thêm nó vào set và di chuyển tiếp
      seen_values.insert(current->data);
      prev = current;
      current = current->next;
    }
  }
}

// Hàm để liệt kê các phần tử còn lại trong danh sách liên kết đơn
void printList(Node *head)
{
  Node *current = head;
  while (current != nullptr)
  {
    std::cout << current->data << " ";
    current = current->next;
  }
  std::cout << std::endl;
}

int main()
{
  Node *First = nullptr;
  int n;

  // Nhập số lượng phần tử trong danh sách

  std::cin >> n;

  for (int i = 0; i < n; i++)
  {
    int value;
    std::cin >> value;
    append(First, value);
  }

  // Lọc các phần tử trùng và chỉ để lại một phần tử đại diện
  filterDuplicates(First);

  // Liệt kê các phần tử còn lại trong danh sách sau khi lọc

  printList(First);

  // Giải phóng bộ nhớ khi kết thúc chương trình
  while (First != nullptr)
  {
    Node *temp = First;
    First = First->next;
    delete temp;
  }

  return 0;
}