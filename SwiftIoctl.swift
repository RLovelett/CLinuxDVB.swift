//===----------------------------------------------------------------------===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2014 - 2016 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See http://swift.org/LICENSE.txt for license information
// See http://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//

@_exported import SwiftIoctl // Clang module

//===----------------------------------------------------------------------===//
// ioctl.h
//===----------------------------------------------------------------------===//

@warn_unused_result
@_silgen_name("_swift_Glibc_ioctl")
internal func _swift_Glibc_ioctl(
  fd: CInt,
  _ cmd: CUnsignedLong,
  _ value: CInt
) -> CInt

@warn_unused_result
public func ioctl(
  fd: CInt,
  _ cmd: CUnsignedLong
) -> CInt {
  return _swift_Glibc_ioctl(fd, cmd, 0)
}

@warn_unused_result
public func ioctl(
  fd: CInt,
  _ cmd: CUnsignedLong,
  _ value: CInt
) -> CInt {
  return _swift_Glibc_fcntl(fd, cmd, value)
}
