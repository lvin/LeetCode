class Solution {
public:
   bool isValid(string s)
{
	if (s.empty()) return true;
	stack<char> st;
	for(int i = 0; i < s.size(); ++i)
	{
		switch (s[i])
		{
			case ')': if(st.empty() || st.top() !='(') 
					  {
						  return false;
					  }
					  else
					  {
						  st.pop();
					  }
					  break;
			case '}': if(st.empty() || st.top() !='{') 
					  {
						  return false;
					  }
					  else
					  {
						  st.pop();
					  }
					  break;
	    	case ']': if(st.empty() || st.top() !='[') 
					  {
						  return false;
					  }
					  else
					  {
						  st.pop();
					  }
					  break;
			default: st.push(s[i]);
					 break;
		}//switch
	}

		return st.empty() ? true:false;
}
};

