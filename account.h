#pragma once
class SavingsAccount {   //�����˻���
private:
	int id;              //�˺�
	double balance;      //���
	double rate;         //����������
	int lastDate;        //�ϴα������ʱ��
	double accumulation; //�����ۼ�֮��
	static double total; //�����˻����ܽ��
	//��¼һ���ˣ�dateΪ���ڣ�amountΪ��descΪ˵��
	void record(int date, double amount);
	//��õ�ָ������Ϊֹ�Ĵ����ջ���ֵ
	double accumulate(int date) const {
		return accumulation + balance * (date - lastDate);
	}
public:
	//���캯��
	SavingsAccount(int date, int id, double rate);
	int getId() const { return id; }
	double getBalance() const { return balance; }
	double getRate() const { return rate; }
	static double getTotal() { return total; }
	void deposit(int date, double amount);    //�����ֽ�
	void withdraw(int date, double amount);   //ȥȡ���ֽ�
	//������Ϣ��ÿ��1��1�յ���һ�θú���
	void settle(int date);
	//��ʾ�˻���Ϣ
	void show();
};