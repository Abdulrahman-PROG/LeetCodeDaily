class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        # Combine position and speed into a list of tuples
        cars = sorted(zip(position, speed), reverse=True)
        fleets = 0
        current_time = 0
        
        for pos, spd in cars:
            # Calculate the time needed for this car to reach the target
            arrival_time = (target - pos) / spd
            
            # If this car arrives later than the current fleet, it forms a new fleet
            if arrival_time > current_time:
                fleets += 1
                current_time = arrival_time
        
        return fleets
