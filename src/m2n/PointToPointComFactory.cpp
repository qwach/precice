// Copyright (C) 2011 Technische Universitaet Muenchen
// This file is part of the preCICE project. For conditions of distribution and
// use, please see the license notice at
// http://www5.in.tum.de/wiki/index.php/PreCICE_License

#include "PointToPointCommunication.hpp"

#include "PointToPointComFactory.hpp"

namespace precice {
namespace m2n {
PointToPointComFactory::PointToPointComFactory(
    com::PtrCommunicationFactory comFactory)
:
    _comFactory(comFactory)
{}


PtrDistributedCommunication
PointToPointComFactory::newDistributedCommunication(mesh::PtrMesh mesh) {
  return PtrDistributedCommunication(new PointToPointCommunication(_comFactory,mesh));
}


}} // namespace precice, m2n
