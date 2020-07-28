// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include "../configuration/procmon_configuration.h"

class Headless
{
    public:
        Headless() { };

        bool initialize(std::shared_ptr<ProcmonConfiguration> configPtr);
        void run();
        void shutdown();

    private:
        // procmon configuration
        std::shared_ptr<ProcmonConfiguration> config;
};