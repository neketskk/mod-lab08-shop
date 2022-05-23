// Copyright 2022 GHA Test Team
#include <gtest/gtest.h>
#include "../include/task.h"


TEST(task1, test1) {
	Shop shop(7, 77, 177, 3, 7);
	shop.Work();
	int result = shop.servedClients;
	EXPECT_EQ(0, result);
}

TEST(task2, test2) {
	Shop shop(0, 43, 123, 6, 3);
	shop.Work();
	int result = shop.rejectedClients;
	EXPECT_EQ(0, result);
}

TEST(task3, test3) {
	Shop shop(4, 44, 333, 5, 2);
	shop.Work();
	int result = 0;
	if (shop.rejectedClients > 30)
		result = 1;
	EXPECT_EQ(1, result);
}