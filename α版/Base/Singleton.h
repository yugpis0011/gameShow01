#pragma once

template< typename T>
class Singleton
{
public:

	//�C���X�^���X�ϐ�
	static T& Get(void)
	{
		static T instance;
		return instance;
	}

protected:
	//�R���X�g���N�^
	Singleton() {};
	
	//�f�X�g���N�^
	~Singleton() {};

private:
	Singleton(const Shingleton&) = delete;
	void operator=(const Shingleton&) = delete;
};