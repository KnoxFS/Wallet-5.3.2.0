// Copyright (c) 2020 The KFX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#ifndef KFX_SAPLING_TEST_FIXTURE_H
#define KFX_SAPLING_TEST_FIXTURE_H

#include "test/test_knoxfs.h"

/**
 * Testing setup that configures a complete environment for Sapling testing.
 */
struct SaplingTestingSetup : public TestingSetup {
    SaplingTestingSetup();
    ~SaplingTestingSetup();
};


#endif //KFX_SAPLING_TEST_FIXTURE_H
