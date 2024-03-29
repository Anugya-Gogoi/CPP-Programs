#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

class huffman
{
 struct New_Node
 {
  char data;
  size_t freq;
  New_Node* left;
  New_Node* right;
  New_Node(char data, size_t freq) : data(data),
                                 freq(freq),
left(NULL),
right(NULL)
{}
 ~New_Node()
 {
   delete left;
   delete right;
 }
 };

struct compare
 {
  bool operator()(New_Node* l, New_Node* r)
  {
    return (l->freq > r->freq);
  }
};

New_Node* top;
void print_Code(New_Node* root, string str)
{
if(root == NULL)
   return;

 if(root->data == '$')
 {
  print_Code(root->left, str + "0");
  print_Code(root->right, str + "1");
 }

 if(root->data != '$')
 {
   cout << root->data <<" : " << str << "\n";
   print_Code(root->left, str + "0");
   print_Code(root->right, str + "1");
 }
}

public:
  huffman() {};
  ~huffman()
  {
    delete top;
  }
  void huffman_tree(vector<char>& data, vector<size_t>& freq, size_t size)
  {
   New_Node* left;
   New_Node* right;
   priority_queue<New_Node*, vector<New_Node*>, compare > minHeap;

for(size_t i = 0; i < size; ++i)
   {
      minHeap.push(new New_Node(data[i], freq[i]));
   }

while(minHeap.size() != 1)
    {
      left = minHeap.top();
minHeap.pop();

      right = minHeap.top();
minHeap.pop();

      top = new New_Node('$', left->freq + right->freq);
      top->left  = left;
      top->right = right;
      minHeap.push(top);
     }
    cout<<"\n";
    print_Code(minHeap.top(), " ");
 }
};

 int main()
 {
  int n, f;
  char ch;
  huffman set1;
  vector<char> data;
  vector<size_t> freq;
  cout<<"Enter the number of elements:";
  cin>>n;
  cout<<"Enter the elements:\n";
  for (int i=0;i<n;i++)
  {
      cin>>ch;
    data.insert(data.end(), ch);
  }
  cout<<"Enter the frequencies:\n";
  for (int i=0;i<n;i++)
  {
      cin>>f;
    freq.insert(freq.end(), f);
  }

  size_t size = data.size();
  set1.huffman_tree(data, freq, size);

  return 0;
}


