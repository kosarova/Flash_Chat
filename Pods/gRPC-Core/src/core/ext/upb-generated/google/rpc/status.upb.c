/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     google/rpc/status.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "google/rpc/status.upb.h"
#include "google/protobuf/any.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout_sub google_rpc_Status_submsgs[1] = {
  {.submsg = &google_protobuf_Any_msginit},
};

static const upb_msglayout_field google_rpc_Status__fields[3] = {
  {1, UPB_SIZE(0, 0), 0, 0, 5, _UPB_MODE_SCALAR | (_UPB_REP_4BYTE << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(12, 24), 0, 0, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout google_rpc_Status_msginit = {
  &google_rpc_Status_submsgs[0],
  &google_rpc_Status__fields[0],
  UPB_SIZE(16, 32), 3, _UPB_MSGEXT_NONE, 3, 255,
};

static const upb_msglayout *messages_layout[1] = {
  &google_rpc_Status_msginit,
};

const upb_msglayout_file google_rpc_status_proto_upb_file_layout = {
  messages_layout,
  NULL,
  1,
  0,
};

#include "upb/port_undef.inc"

