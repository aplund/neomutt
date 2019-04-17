/**
 * @file
 * Test code hub
 *
 * @authors
 * Copyright (C) 2018 Pietro Cerutti <gahr@gahr.ch>
 *
 * @copyright
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "acutest.h"

/******************************************************************************
 * Add your test cases to this list.
 *****************************************************************************/
#define NEOMUTT_TEST_LIST                                                      \
  NEOMUTT_TEST_ITEM(test_file_iter_line)                                       \
  NEOMUTT_TEST_ITEM(test_file_map_lines)                                       \
  NEOMUTT_TEST_ITEM(test_base64_encode)                                        \
  NEOMUTT_TEST_ITEM(test_base64_decode)                                        \
  NEOMUTT_TEST_ITEM(test_base64_lengths)                                       \
  NEOMUTT_TEST_ITEM(test_rfc2047)                                              \
  NEOMUTT_TEST_ITEM(test_md5)                                                  \
  NEOMUTT_TEST_ITEM(test_md5_ctx)                                              \
  NEOMUTT_TEST_ITEM(test_md5_ctx_bytes)                                        \
  NEOMUTT_TEST_ITEM(test_addr_mbox_to_udomain)                                 \
  NEOMUTT_TEST_ITEM(test_mutt_path_tidy_slash)                                 \
  NEOMUTT_TEST_ITEM(test_mutt_path_tidy_dotdot)                                \
  NEOMUTT_TEST_ITEM(test_mutt_path_tidy)                                       \
  NEOMUTT_TEST_ITEM(test_url)                                                  \
  NEOMUTT_TEST_ITEM(test_mutt_buffer_concat_path)                              \
  NEOMUTT_TEST_ITEM(test_mutt_path_getcwd)

/******************************************************************************
 * You probably don't need to touch what follows.
 *****************************************************************************/
#define NEOMUTT_TEST_ITEM(x) void x(void);
NEOMUTT_TEST_LIST
#undef NEOMUTT_TEST_ITEM

TEST_LIST = {
#define NEOMUTT_TEST_ITEM(x) { #x, x },
  NEOMUTT_TEST_LIST
#undef NEOMUTT_TEST_ITEM
  { 0 }
};
