// data.cpp -- datas

/*���˻�����Ϣ��
*���� name
    string
*�Ա�  gender
    enum
*����   age
    char
*��� height
    float
*���� weight
    float
*�λ���  VC
    VC = (27.63 - 0.112 * age) * height(cm)���У�
    VC = ��21.78 - 0.101 * age)* height(cm)  (Ů��
    unsigned int
*����  heart - rate
    char    
*����  step
    unsigned int
*����  distance 
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
