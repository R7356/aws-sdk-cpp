﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteEngineType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/RouteVehicleLicensePlate.h>
#include <aws/geo-routes/model/RouteTrailerOptions.h>
#include <aws/geo-routes/model/RouteTruckType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/WeightPerAxleGroup.h>
#include <aws/geo-routes/model/RouteHazardousCargoType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>Travel mode options when the provided travel mode is "Truck"</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteTruckOptions">AWS
   * API Reference</a></p>
   */
  class RouteTruckOptions
  {
  public:
    AWS_GEOROUTES_API RouteTruckOptions();
    AWS_GEOROUTES_API RouteTruckOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteTruckOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Total number of axles of the vehicle.</p>
     */
    inline int GetAxleCount() const{ return m_axleCount; }
    inline bool AxleCountHasBeenSet() const { return m_axleCountHasBeenSet; }
    inline void SetAxleCount(int value) { m_axleCountHasBeenSet = true; m_axleCount = value; }
    inline RouteTruckOptions& WithAxleCount(int value) { SetAxleCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Engine type of the vehicle.</p>
     */
    inline const RouteEngineType& GetEngineType() const{ return m_engineType; }
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }
    inline void SetEngineType(const RouteEngineType& value) { m_engineTypeHasBeenSet = true; m_engineType = value; }
    inline void SetEngineType(RouteEngineType&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::move(value); }
    inline RouteTruckOptions& WithEngineType(const RouteEngineType& value) { SetEngineType(value); return *this;}
    inline RouteTruckOptions& WithEngineType(RouteEngineType&& value) { SetEngineType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Gross weight of the vehicle including trailers, and goods at capacity.</p>
     * <p> <b>Unit</b>: <code>Kilograms</code> </p>
     */
    inline long long GetGrossWeight() const{ return m_grossWeight; }
    inline bool GrossWeightHasBeenSet() const { return m_grossWeightHasBeenSet; }
    inline void SetGrossWeight(long long value) { m_grossWeightHasBeenSet = true; m_grossWeight = value; }
    inline RouteTruckOptions& WithGrossWeight(long long value) { SetGrossWeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of Hazardous cargo contained in the vehicle.</p>
     */
    inline const Aws::Vector<RouteHazardousCargoType>& GetHazardousCargos() const{ return m_hazardousCargos; }
    inline bool HazardousCargosHasBeenSet() const { return m_hazardousCargosHasBeenSet; }
    inline void SetHazardousCargos(const Aws::Vector<RouteHazardousCargoType>& value) { m_hazardousCargosHasBeenSet = true; m_hazardousCargos = value; }
    inline void SetHazardousCargos(Aws::Vector<RouteHazardousCargoType>&& value) { m_hazardousCargosHasBeenSet = true; m_hazardousCargos = std::move(value); }
    inline RouteTruckOptions& WithHazardousCargos(const Aws::Vector<RouteHazardousCargoType>& value) { SetHazardousCargos(value); return *this;}
    inline RouteTruckOptions& WithHazardousCargos(Aws::Vector<RouteHazardousCargoType>&& value) { SetHazardousCargos(std::move(value)); return *this;}
    inline RouteTruckOptions& AddHazardousCargos(const RouteHazardousCargoType& value) { m_hazardousCargosHasBeenSet = true; m_hazardousCargos.push_back(value); return *this; }
    inline RouteTruckOptions& AddHazardousCargos(RouteHazardousCargoType&& value) { m_hazardousCargosHasBeenSet = true; m_hazardousCargos.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Height of the vehicle.</p> <p> <b>Unit</b>: <code>centimeters</code> </p>
     */
    inline long long GetHeight() const{ return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(long long value) { m_heightHasBeenSet = true; m_height = value; }
    inline RouteTruckOptions& WithHeight(long long value) { SetHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Height of the vehicle above its first axle.</p> <p> <b>Unit</b>:
     * <code>centimeters</code> </p>
     */
    inline long long GetHeightAboveFirstAxle() const{ return m_heightAboveFirstAxle; }
    inline bool HeightAboveFirstAxleHasBeenSet() const { return m_heightAboveFirstAxleHasBeenSet; }
    inline void SetHeightAboveFirstAxle(long long value) { m_heightAboveFirstAxleHasBeenSet = true; m_heightAboveFirstAxle = value; }
    inline RouteTruckOptions& WithHeightAboveFirstAxle(long long value) { SetHeightAboveFirstAxle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Kingpin to rear axle length of the vehicle.</p> <p> <b>Unit</b>:
     * <code>centimeters</code> </p>
     */
    inline long long GetKpraLength() const{ return m_kpraLength; }
    inline bool KpraLengthHasBeenSet() const { return m_kpraLengthHasBeenSet; }
    inline void SetKpraLength(long long value) { m_kpraLengthHasBeenSet = true; m_kpraLength = value; }
    inline RouteTruckOptions& WithKpraLength(long long value) { SetKpraLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Length of the vehicle.</p> <p> <b>Unit</b>: <code>c</code> </p>
     */
    inline long long GetLength() const{ return m_length; }
    inline bool LengthHasBeenSet() const { return m_lengthHasBeenSet; }
    inline void SetLength(long long value) { m_lengthHasBeenSet = true; m_length = value; }
    inline RouteTruckOptions& WithLength(long long value) { SetLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vehicle License Plate.</p>
     */
    inline const RouteVehicleLicensePlate& GetLicensePlate() const{ return m_licensePlate; }
    inline bool LicensePlateHasBeenSet() const { return m_licensePlateHasBeenSet; }
    inline void SetLicensePlate(const RouteVehicleLicensePlate& value) { m_licensePlateHasBeenSet = true; m_licensePlate = value; }
    inline void SetLicensePlate(RouteVehicleLicensePlate&& value) { m_licensePlateHasBeenSet = true; m_licensePlate = std::move(value); }
    inline RouteTruckOptions& WithLicensePlate(const RouteVehicleLicensePlate& value) { SetLicensePlate(value); return *this;}
    inline RouteTruckOptions& WithLicensePlate(RouteVehicleLicensePlate&& value) { SetLicensePlate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum speed</p> <p> <b>Unit</b>: <code>KilometersPerHour</code> </p>
     */
    inline double GetMaxSpeed() const{ return m_maxSpeed; }
    inline bool MaxSpeedHasBeenSet() const { return m_maxSpeedHasBeenSet; }
    inline void SetMaxSpeed(double value) { m_maxSpeedHasBeenSet = true; m_maxSpeed = value; }
    inline RouteTruckOptions& WithMaxSpeed(double value) { SetMaxSpeed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of occupants in the vehicle.</p> <p>Default Value: <code>1</code>
     * </p>
     */
    inline int GetOccupancy() const{ return m_occupancy; }
    inline bool OccupancyHasBeenSet() const { return m_occupancyHasBeenSet; }
    inline void SetOccupancy(int value) { m_occupancyHasBeenSet = true; m_occupancy = value; }
    inline RouteTruckOptions& WithOccupancy(int value) { SetOccupancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Payload capacity of the vehicle and trailers attached.</p> <p> <b>Unit</b>:
     * <code>kilograms</code> </p>
     */
    inline long long GetPayloadCapacity() const{ return m_payloadCapacity; }
    inline bool PayloadCapacityHasBeenSet() const { return m_payloadCapacityHasBeenSet; }
    inline void SetPayloadCapacity(long long value) { m_payloadCapacityHasBeenSet = true; m_payloadCapacity = value; }
    inline RouteTruckOptions& WithPayloadCapacity(long long value) { SetPayloadCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of tires on the vehicle.</p>
     */
    inline int GetTireCount() const{ return m_tireCount; }
    inline bool TireCountHasBeenSet() const { return m_tireCountHasBeenSet; }
    inline void SetTireCount(int value) { m_tireCountHasBeenSet = true; m_tireCount = value; }
    inline RouteTruckOptions& WithTireCount(int value) { SetTireCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Trailer options corresponding to the vehicle.</p>
     */
    inline const RouteTrailerOptions& GetTrailer() const{ return m_trailer; }
    inline bool TrailerHasBeenSet() const { return m_trailerHasBeenSet; }
    inline void SetTrailer(const RouteTrailerOptions& value) { m_trailerHasBeenSet = true; m_trailer = value; }
    inline void SetTrailer(RouteTrailerOptions&& value) { m_trailerHasBeenSet = true; m_trailer = std::move(value); }
    inline RouteTruckOptions& WithTrailer(const RouteTrailerOptions& value) { SetTrailer(value); return *this;}
    inline RouteTruckOptions& WithTrailer(RouteTrailerOptions&& value) { SetTrailer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the truck.</p>
     */
    inline const RouteTruckType& GetTruckType() const{ return m_truckType; }
    inline bool TruckTypeHasBeenSet() const { return m_truckTypeHasBeenSet; }
    inline void SetTruckType(const RouteTruckType& value) { m_truckTypeHasBeenSet = true; m_truckType = value; }
    inline void SetTruckType(RouteTruckType&& value) { m_truckTypeHasBeenSet = true; m_truckType = std::move(value); }
    inline RouteTruckOptions& WithTruckType(const RouteTruckType& value) { SetTruckType(value); return *this;}
    inline RouteTruckOptions& WithTruckType(RouteTruckType&& value) { SetTruckType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tunnel restriction code.</p> <p>Tunnel categories in this list indicate
     * the restrictions which apply to certain tunnels in Great Britain. They relate to
     * the types of dangerous goods that can be transported through them.</p> <ul> <li>
     * <p> <i>Tunnel Category B</i> </p> <ul> <li> <p> <i>Risk Level</i>: Limited
     * risk</p> </li> <li> <p> <i>Restrictions</i>: Few restrictions</p> </li> </ul>
     * </li> <li> <p> <i>Tunnel Category C</i> </p> <ul> <li> <p> <i>Risk Level</i>:
     * Medium risk</p> </li> <li> <p> <i>Restrictions</i>: Some restrictions</p> </li>
     * </ul> </li> <li> <p> <i>Tunnel Category D</i> </p> <ul> <li> <p> <i>Risk
     * Level</i>: High risk</p> </li> <li> <p> <i>Restrictions</i>: Many restrictions
     * occur</p> </li> </ul> </li> <li> <p> <i>Tunnel Category E</i> </p> <ul> <li> <p>
     * <i>Risk Level</i>: Very high risk</p> </li> <li> <p> <i>Restrictions</i>:
     * Restricted tunnel</p> </li> </ul> </li> </ul>
     */
    inline const Aws::String& GetTunnelRestrictionCode() const{ return m_tunnelRestrictionCode; }
    inline bool TunnelRestrictionCodeHasBeenSet() const { return m_tunnelRestrictionCodeHasBeenSet; }
    inline void SetTunnelRestrictionCode(const Aws::String& value) { m_tunnelRestrictionCodeHasBeenSet = true; m_tunnelRestrictionCode = value; }
    inline void SetTunnelRestrictionCode(Aws::String&& value) { m_tunnelRestrictionCodeHasBeenSet = true; m_tunnelRestrictionCode = std::move(value); }
    inline void SetTunnelRestrictionCode(const char* value) { m_tunnelRestrictionCodeHasBeenSet = true; m_tunnelRestrictionCode.assign(value); }
    inline RouteTruckOptions& WithTunnelRestrictionCode(const Aws::String& value) { SetTunnelRestrictionCode(value); return *this;}
    inline RouteTruckOptions& WithTunnelRestrictionCode(Aws::String&& value) { SetTunnelRestrictionCode(std::move(value)); return *this;}
    inline RouteTruckOptions& WithTunnelRestrictionCode(const char* value) { SetTunnelRestrictionCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Heaviest weight per axle irrespective of the axle type or the axle group.
     * Meant for usage in countries where the differences in axle types or axle groups
     * are not distinguished.</p> <p> <b>Unit</b>: <code>Kilograms</code> </p>
     */
    inline long long GetWeightPerAxle() const{ return m_weightPerAxle; }
    inline bool WeightPerAxleHasBeenSet() const { return m_weightPerAxleHasBeenSet; }
    inline void SetWeightPerAxle(long long value) { m_weightPerAxleHasBeenSet = true; m_weightPerAxle = value; }
    inline RouteTruckOptions& WithWeightPerAxle(long long value) { SetWeightPerAxle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the total weight for the specified axle group. Meant for usage in
     * countries that have different regulations based on the axle group type.</p> <p>
     * <b>Unit</b>: <code>Kilograms</code> </p>
     */
    inline const WeightPerAxleGroup& GetWeightPerAxleGroup() const{ return m_weightPerAxleGroup; }
    inline bool WeightPerAxleGroupHasBeenSet() const { return m_weightPerAxleGroupHasBeenSet; }
    inline void SetWeightPerAxleGroup(const WeightPerAxleGroup& value) { m_weightPerAxleGroupHasBeenSet = true; m_weightPerAxleGroup = value; }
    inline void SetWeightPerAxleGroup(WeightPerAxleGroup&& value) { m_weightPerAxleGroupHasBeenSet = true; m_weightPerAxleGroup = std::move(value); }
    inline RouteTruckOptions& WithWeightPerAxleGroup(const WeightPerAxleGroup& value) { SetWeightPerAxleGroup(value); return *this;}
    inline RouteTruckOptions& WithWeightPerAxleGroup(WeightPerAxleGroup&& value) { SetWeightPerAxleGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Width of the vehicle.</p> <p> <b>Unit</b>: <code>centimeters</code> </p>
     */
    inline long long GetWidth() const{ return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(long long value) { m_widthHasBeenSet = true; m_width = value; }
    inline RouteTruckOptions& WithWidth(long long value) { SetWidth(value); return *this;}
    ///@}
  private:

    int m_axleCount;
    bool m_axleCountHasBeenSet = false;

    RouteEngineType m_engineType;
    bool m_engineTypeHasBeenSet = false;

    long long m_grossWeight;
    bool m_grossWeightHasBeenSet = false;

    Aws::Vector<RouteHazardousCargoType> m_hazardousCargos;
    bool m_hazardousCargosHasBeenSet = false;

    long long m_height;
    bool m_heightHasBeenSet = false;

    long long m_heightAboveFirstAxle;
    bool m_heightAboveFirstAxleHasBeenSet = false;

    long long m_kpraLength;
    bool m_kpraLengthHasBeenSet = false;

    long long m_length;
    bool m_lengthHasBeenSet = false;

    RouteVehicleLicensePlate m_licensePlate;
    bool m_licensePlateHasBeenSet = false;

    double m_maxSpeed;
    bool m_maxSpeedHasBeenSet = false;

    int m_occupancy;
    bool m_occupancyHasBeenSet = false;

    long long m_payloadCapacity;
    bool m_payloadCapacityHasBeenSet = false;

    int m_tireCount;
    bool m_tireCountHasBeenSet = false;

    RouteTrailerOptions m_trailer;
    bool m_trailerHasBeenSet = false;

    RouteTruckType m_truckType;
    bool m_truckTypeHasBeenSet = false;

    Aws::String m_tunnelRestrictionCode;
    bool m_tunnelRestrictionCodeHasBeenSet = false;

    long long m_weightPerAxle;
    bool m_weightPerAxleHasBeenSet = false;

    WeightPerAxleGroup m_weightPerAxleGroup;
    bool m_weightPerAxleGroupHasBeenSet = false;

    long long m_width;
    bool m_widthHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
