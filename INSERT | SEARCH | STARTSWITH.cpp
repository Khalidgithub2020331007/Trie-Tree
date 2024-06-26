#include <iostream>
using namespace std;

struct Node{
  Node *links[26];
  bool flag =false;
  bool containsKey(char ch)
  {
    return (links[ch-'a']!=NULL);
  }
  
  void put(char ch, Node *node)
  {
    links[ch - 'a']=node;
  }
  
  Node* get(char ch)
  {
    return links[ch - 'a'];
  }
  bool setEnd()
  {
    flag=true;
  }
}
class Trie{
private : Node* root;
public:
  Trie()
  {
     root =new Node();
  }
  
  
  // Insertion
  // time Complexity=O(len)
  void insert(string word)
  {
     Node* node=root;
     
     for(int i=0;i<word.length();i++)
     {
       if(!node->containsKey(word[i]))
       {
         node->put(word[i],new Node());
         
       }
       
       node->get(word[i]);
     }
     
     node->setEnd();
  }
  
  bool search(string word)
  {
    
  }
  
  bool startsWith(string prefix)
  {
    
  }
  
}
int main() 
{
    cout << "Hello, World!";
    return 0;
}
