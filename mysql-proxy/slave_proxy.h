/*
 * SlaveProxy.h
 *
 *  Created on: 2012-3-1
 *      Author: jianghao
 */

#ifndef SLAVEPROXY_H_
#define SLAVEPROXY_H_

#include "sql/rpl_mi.h"

class SlaveProxy {

private:
	Master_info *master;
//	MySQL *sourceMysql;
//	MySQL *targetMysql;

	int ioThreadId;
	int sqlThreadId;

public:
	SlaveProxy(char* indicator);
	virtual ~SlaveProxy();

};

#endif /* SLAVEPROXY_H_ */
