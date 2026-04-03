%struct.Data = type { i32, i32 }
define dso_local i32 @Abs(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca %struct.Data
  %5 = alloca i32
  store i32 %0, i32* %3
  %7 = load i32, i32* %3
  %8 = getelementptr inbounds %struct.Data, %struct.Data* %4, i32 0, i32 0
  store i32 %7, i32* %8
  %9 = load i32, i32* %3
  %10 = icmp slt i32 %9, 0
  %11 = zext i1 %10 to i32
  %12 = getelementptr inbounds %struct.Data, %struct.Data* %4, i32 0, i32 1
  store i32 %11, i32* %12
  %13 = getelementptr inbounds %struct.Data, %struct.Data* %4, i32 0, i32 1
  %14 = load i32, i32* %13
  %15 = icmp ne i32 %14, 0
  br i1 %15, label %16, label %20
16:
  %17 = getelementptr inbounds %struct.Data, %struct.Data* %4, i32 0, i32 0
  %18 = load i32, i32* %17
  %19 = sub nsw i32 0, %18
  store i32 %19, i32* %2
  store i32 1, i32* %5
  br label %23
20:
  %21 = getelementptr inbounds %struct.Data, %struct.Data* %4, i32 0, i32 0
  %22 = load i32, i32* %21
  store i32 %22, i32* %2
  store i32 1, i32* %5
  br label %23
23:
  %25 = load i32, i32* %2
  ret i32 %25
}
