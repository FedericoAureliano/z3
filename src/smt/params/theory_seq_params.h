/*++
Copyright (c) 2018 Microsoft Corporation

Module Name:

    theory_seq_params.h

Abstract:

    Parameters for sequence theory plugin

Revision History:


--*/

#ifndef THEORY_SEQ_PARAMS_H
#define THEORY_SEQ_PARAMS_H

#include "util/params.h"

struct theory_seq_params {
    /*
     * Enable splitting guided by length constraints
     */
    bool m_split_w_len;

    /*
     * Enable multiset abstraction checking
     */  
    bool m_multiset_check;

    /*
     * Enable fix length and check
     */  
    bool m_length_based_word_solving;

    theory_seq_params(params_ref const & p = params_ref()):
        m_split_w_len(true),
        m_multiset_check(true),
        m_length_based_word_solving(true)
    {
        updt_params(p);
    }

    void updt_params(params_ref const & p);
};

#endif /* THEORY_SEQ_PARAMS_H */
