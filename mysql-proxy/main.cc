/*
 * main.cpp
 *
 *  Created on: 2012-3-1
 *      Author: jianghao
 */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

#include "slave_proxy.h"
#include "slave.h"
#include "util/string_pool.h"
/**
 *
 */
void print_usage();

StringPool *stringPool;

int main(int argc, char** argv) {
	/*
	 * Print usage
	 */
	if (1 == argc) {
		print_usage();
		return 0;
	}
	/*
	 * Global Constants init
	 */
	stringPool = new StringPool();

	/*
	 * Parse args
	 */
	char* user, *password, *host;
	while (int opt = getopt(argc, argv, "uph") != -1) {
		switch (opt) {
		case 'u':
			user = stringPool->allocate(strlen(optarg));
			strcpy(user, optarg);
			break;
		case 'p':
			password = stringPool->allocate(strlen(optarg));
			strcpy(password, optarg);
			break;
		case 'h':
			host = stringPool->allocate(strlen(optarg));
			strcpy(host, optarg);
			break;
		}
	}

	/**
	 * Start Master-Slave IO threads
	 */


	/*
	 * Release Resources
	 */
	delete stringPool;
}

void print_usage() {
	printf("Usage: mysql-proxy -u <username> -p <password> -h <host>");
}

