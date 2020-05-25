#include "VipOrder.h"


int VipOrder::Vip_WT = 0;

VipOrder::VipOrder(int ID, int size, int time, double money) :
	Order(ID, TYPE_VIP, size, time, money)
{
	CalculatePriorityFactor();
	isUrgent = false;
}

VipOrder::VipOrder(NormalOrder* ord) :
	Order(ord->GetID(), TYPE_VIP, ord->GetSize(), ord->GetAT(), ord->GetMoney())
{
	CalculatePriorityFactor();
	isUrgent = false;
}

void VipOrder::CalculatePriorityFactor()
{
	//write priority equation here

	//PriorityFactor = ;
}

float VipOrder::GetPriorityFactor()
{
	return PriorityFactor;
}

bool VipOrder::IsUrgent()
{
	return isUrgent;
}

bool VipOrder::operator > (VipOrder ord)
{
	return PriorityFactor > ord.PriorityFactor;
}

VipOrder::operator int()
{
	return ArrTime + Vip_WT;
}

void VipOrder::SetVipWT(int time)
{
	Vip_WT = time;
}