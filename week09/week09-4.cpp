//week09-4.cpp
//1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        int max=salary[0];
        int min=salary[0];
        double total=0;
        for(int i=0;i<salary.size();i++){
            if(salary[i]>max) max=salary[i];//找最大值
            if(salary[i]<min) min=salary[i];//找最小值
            total+=salary[i];
        }
        return (total-max-min)/(salary.size()-2);
    }
};