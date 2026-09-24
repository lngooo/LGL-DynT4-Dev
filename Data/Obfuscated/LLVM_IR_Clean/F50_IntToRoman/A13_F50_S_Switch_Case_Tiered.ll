@.str = constant [2 x i8] c"M\00"
@.str.1 = constant [2 x i8] c"C\00"
@.str.2 = constant [2 x i8] c"D\00"
@.str.3 = constant [2 x i8] c"X\00"
@.str.4 = constant [2 x i8] c"L\00"
@.str.5 = constant [2 x i8] c"I\00"
@.str.6 = constant [2 x i8] c"V\00"
define dso_local void @a6zy(i8* %0, i32 %1, i8* %2) {
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i32
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i32 0, i32* %7
  br label %9
9:
  %10 = load i32, i32* %7
  %11 = load i32, i32* %5
  %12 = icmp slt i32 %10, %11
  br i1 %12, label %15, label %13
13:
  br label %22
15:
  %16 = load i8*, i8** %4
  %17 = load i8*, i8** %6
  %18 = call i8* @strcat(i8* %16, i8* %17)
  br label %19
19:
  %20 = load i32, i32* %7
  %21 = add nsw i32 %20, 1
  store i32 %21, i32* %7
  br label %9
22:
  ret void
}
declare i8* @strcat(i8*, i8*)
define dso_local void @yJ(i8* %0, i32 %1, i8* %2, i8* %3, i8* %4) {
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca i8*
  %9 = alloca i8*
  %10 = alloca i8*
  store i8* %0, i8** %6
  store i32 %1, i32* %7
  store i8* %2, i8** %8
  store i8* %3, i8** %9
  store i8* %4, i8** %10
  %11 = load i32, i32* %7
  switch i32 %11, label %35 [
    i32 0, label %42
    i32 1, label %12
    i32 2, label %12
    i32 3, label %12
    i32 4, label %16
    i32 5, label %23
    i32 6, label %27
    i32 7, label %27
    i32 8, label %27
  ]
12:
  %13 = load i8*, i8** %6
  %14 = load i32, i32* %7
  %15 = load i8*, i8** %8
  call void @a6zy(i8* %13, i32 %14, i8* %15)
  br label %42
16:
  %17 = load i8*, i8** %6
  %18 = load i8*, i8** %8
  %19 = call i8* @strcat(i8* %17, i8* %18)
  %20 = load i8*, i8** %6
  %21 = load i8*, i8** %9
  %22 = call i8* @strcat(i8* %20, i8* %21)
  br label %42
23:
  %24 = load i8*, i8** %6
  %25 = load i8*, i8** %9
  %26 = call i8* @strcat(i8* %24, i8* %25)
  br label %42
27:
  %28 = load i8*, i8** %6
  %29 = load i8*, i8** %9
  %30 = call i8* @strcat(i8* %28, i8* %29)
  %31 = load i8*, i8** %6
  %32 = load i32, i32* %7
  %33 = sub nsw i32 %32, 5
  %34 = load i8*, i8** %8
  call void @a6zy(i8* %31, i32 %33, i8* %34)
  br label %42
35:
  %36 = load i8*, i8** %6
  %37 = load i8*, i8** %8
  %38 = call i8* @strcat(i8* %36, i8* %37)
  %39 = load i8*, i8** %6
  %40 = load i8*, i8** %10
  %41 = call i8* @strcat(i8* %39, i8* %40)
  br label %42
42:
  ret void
}
define dso_local void @uDGN(i32 %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  store i32 %0, i32* %3
  store i8* %1, i8** %4
  %5 = load i8*, i8** %4
  %6 = getelementptr inbounds i8, i8* %5, i64 0
  store i8 0, i8* %6
  %7 = load i8*, i8** %4
  %8 = load i32, i32* %3
  %9 = sdiv i32 %8, 1000
  call void @a6zy(i8* %7, i32 %9, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  %10 = load i32, i32* %3
  %11 = srem i32 %10, 1000
  store i32 %11, i32* %3
  %12 = load i8*, i8** %4
  %13 = load i32, i32* %3
  %14 = sdiv i32 %13, 100
  call void @yJ(i8* %12, i32 %14, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.2, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  %15 = load i32, i32* %3
  %16 = srem i32 %15, 100
  store i32 %16, i32* %3
  %17 = load i8*, i8** %4
  %18 = load i32, i32* %3
  %19 = sdiv i32 %18, 10
  call void @yJ(i8* %17, i32 %19, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.3, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.4, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
  %20 = load i32, i32* %3
  %21 = srem i32 %20, 10
  store i32 %21, i32* %3
  %22 = load i8*, i8** %4
  %23 = load i32, i32* %3
  call void @yJ(i8* %22, i32 %23, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.5, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.6, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.3, i64 0, i64 0))
  ret void
}
