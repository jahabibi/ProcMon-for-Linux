// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#define MAX_COLUMNS 5

#include <ncurses.h>
#include <math.h>

#include "../storage/storage_engine.h"

class ScreenConfiguration
{
    public:
        ScreenConfiguration()
        { 
            // set default view for UI
            columnSort = IStorageEngine::Sort::time;
            columnAscending = true;
        }

        void setColumnSort(IStorageEngine::Sort sort) { columnSort = sort; }
        IStorageEngine::Sort getColumnSort() { return columnSort; }
        void toggleColumnAscending() { columnAscending = !columnAscending; }
        void setColumnAscending(bool asc) { columnAscending = asc; }
        bool getColumnAscending() { return columnAscending; }

    private:
        // UI Control Variables
        IStorageEngine::Sort columnSort;
        bool columnAscending;
};
