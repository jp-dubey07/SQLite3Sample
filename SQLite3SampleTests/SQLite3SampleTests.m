//
//  SQLite3SampleTests.m
//  SQLite3SampleTests
//
//  Created by MACBOOK-MUM on 04/03/15.
//  Copyright (c) 2015 MACBOOK-MUM. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <XCTest/XCTest.h>

@interface SQLite3SampleTests : XCTestCase

@end

@implementation SQLite3SampleTests

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testExample {
    // This is an example of a functional test case.
    XCTAssert(YES, @"Pass");
}

- (void)testPerformanceExample {
    // This is an example of a performance test case.
    [self measureBlock:^{
        // Put the code you want to measure the time of here.
    }];
}

@end
