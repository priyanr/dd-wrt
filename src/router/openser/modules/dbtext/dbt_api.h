/*
 * $Id: dbt_api.h,v 1.1.1.1 2005/06/13 16:47:36 bogdan_iancu Exp $
 *
 * DBText library
 *
 * Copyright (C) 2001-2003 FhG Fokus
 *
 * This file is part of openser, a free SIP server.
 *
 * openser is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 * openser is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program; if not, write to the Free Software 
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * 
 * History:
 * --------
 * 2003-02-05  created by Daniel
 * 
 */


#ifndef _DBT_API_H_
#define _DBT_API_H_

#include "../../db/db_op.h"
#include "../../db/db_res.h"
#include "../../db/db_con.h"
#include "../../db/db_row.h"

int dbt_free_columns(db_res_t* _r);

/*
 * Release memory used by row
 */
int dbt_free_row(db_row_t* _r);

/*
 * Release memory used by rows
 */
int dbt_free_rows(db_res_t* _r);

/*
 * Release memory used by a result structure
 */
int dbt_free_result(db_res_t* _r);

/*
 * Retrieve result set
 */
int dbt_get_result(db_con_t* _h, db_res_t** _r);

/*
 * Get and convert columns from a result
 */
int dbt_get_columns(db_con_t* _h, db_res_t* _r);

/*
 * Convert rows from mysql to db API representation
 */
int dbt_convert_rows(db_con_t* _h, db_res_t* _r);

/*
 * Convert a row from result into db API representation
 */
int dbt_convert_row(db_con_t* _h, db_res_t* _res, db_row_t* _r);


int dbt_use_table(db_con_t* _h, const char* _t);

#endif
