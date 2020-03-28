//the code for simple dfs
vector<ll,ll>adj[n+1];
bool visited[n+1];
void dfs(int s)
{
  visited[s]=true;
  for(auto it=adj[s].begin();it!=adj[s].end();it++)
  {
      if(!visited[*it])
      dfs(*it);
  }
}
for(ll i=0;i<=n;i++)
{
  if(!visited[i])
  {
       dfs(i);
  }
}
int main()
{  
  dfs(8);//callinf dfs function
  return 0;
}
