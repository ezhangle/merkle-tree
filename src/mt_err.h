/*
 * mt_err.h
 *
 *  Created on: 09.05.2014
 *      Author: dhein
 */

#ifndef MT_ERR_H_
#define MT_ERR_H_

/*!
 * \brief Used to convey error information, if an Merkle Tree operation
 * fails.
 */
typedef enum mt_error {
  MT_SUCCESS           =  0, /*!< Operation terminated successfully */                    //!< MT_SUCCESS
  MT_ERR_OUT_Of_MEMORY = -1, /*!< There was not enough memory to complete the operation *///!< MT_ERR_OUT_Of_MEMORY
  MT_ERR_ILLEGAL_PARAM = -2, /*!< At least one of the specified parameters was illegal */ //!< MT_ERR_ILLEGAL_PARAM
  MT_ERR_ILLEGAL_STATE = -3, /*!< The operation reached an illegal state */               //!< MT_ERR_ILLEGAL_STATE
  MT_ERR_UNSPECIFIED   = -4  /*!< A general error occured */                              //!< MT_ERR_UNSPECIFIED
} mt_error_t;

#endif /* MT_ERR_H_ */
