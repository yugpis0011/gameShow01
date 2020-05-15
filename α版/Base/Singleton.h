#pragma once

template< typename T>
class Singleton
{
public:

	//インスタンス変数
	static T& Get(void)
	{
		static T instance;
		return instance;
	}

protected:
	//コンストラクタ
	Singleton() {};
	
	//デストラクタ
	~Singleton() {};

private:
	Singleton(const Shingleton&) = delete;
	void operator=(const Shingleton&) = delete;
};