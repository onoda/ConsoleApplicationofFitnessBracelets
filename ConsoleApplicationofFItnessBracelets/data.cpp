// data.cpp -- datas

/*个人基本信息：
*姓名 name
    string
*性别  gender
    enum
*年龄   age
    char
*身高 height
    float
*体重 weight
    float
*肺活量  VC
    VC = (27.63 - 0.112 * age) * height(cm)（男）
    VC = （21.78 - 0.101 * age)* height(cm)  (女）
    unsigned int
*心率  heart - rate
    char    
*步数  step
    unsigned int
*距离  distance 
    float
*/

#include<vector>

enum gender
{
    male, female
};
struct individual
{
    char name[10];
    gender sex;
    char age;
    float height, weight;
    unsigned vc;
    char heart_rate;
    unsigned step;
    float distance;
};
std::vector<individual> men(1);
