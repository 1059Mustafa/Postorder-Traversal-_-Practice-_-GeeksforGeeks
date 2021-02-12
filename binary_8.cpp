vector<int> postOrder(Node* root)
{
  stack<Node*>s;
  vector<int>v;
  Node* curr=root;
  Node* pre=NULL;
  while(curr!=NULL||s.size()>0)
  {
     while(curr!=NULL)
     {
         s.push(curr);
         curr=curr->left;
     }
     curr=s.top();
     if(curr->right==NULL || curr->right==pre)
     {
		v.push_back(curr->data);
		s.pop();
		pre=curr;
		curr = NULL;
	  }
	  else
	  {
	      curr = curr->right;
	  }
  }
  return v;
}
