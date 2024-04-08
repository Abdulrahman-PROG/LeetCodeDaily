class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> student, sandwich;
        int isLoop = 0;
        //create two queues of sandwiches and students
        for(int i = 0; i < students.size(); i++)
            student.push(students[i]);
        for(int i = 0; i < sandwiches.size(); i++)
            sandwich.push(sandwiches[i]);
        
        while(true)
        {
            if(isLoop == student.size()) break;
//if one student come back to the queue, add isLoop by 1
            if(student.front() != sandwich.front())
            {
                student.push(student.front());
                student.pop();
                isLoop++;
            }
            else
            {//if a student takes his sandwich, just remove both of them 
                isLoop = 0;
                student.pop();
                sandwich.pop();
            }
        }
        return student.size();
        
    }
};