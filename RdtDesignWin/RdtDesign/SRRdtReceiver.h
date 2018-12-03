#pragma once
#include "RdtReceiver.h"
class SRRdtReceiver :
	public RdtReceiver
{
private:
	//srЭ����շ�Ҳ��Ҫ�������ͻ�������
	const int wndsize;
	const int seqsize;
	Packet lastAckPkt;
	Packet *const recvBuf;
	bool *const bufStatus;
	int base;
	//int nextSeqnum;

private:
	void Init();
	void printSlideWindow();
	bool isInWindow(int seqnum);

public:
	SRRdtReceiver();
	SRRdtReceiver(int sSize, int wsize);
	void receive(Packet &packet);
	virtual ~SRRdtReceiver();
};
