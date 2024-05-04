
// Definition for Employee.
// class Employee {
// public:
//     int id;
//     int importance;
//     vector<int> subordinates;
// };


class Solution {
private:
    unordered_map<int,Employee*> idEmp;
public:
    int dfs(int id){
        Employee* emp = idEmp[id];
        int res = emp->importance;
        for(auto& subEmp : emp->subordinates){
            res+=dfs(subEmp);
        }
        return res;
    }
    int getImportance(vector<Employee*> employees, int id) {
          for(auto&e : employees){
            idEmp[e->id] = e;
          }
          return dfs(id);
    }
};