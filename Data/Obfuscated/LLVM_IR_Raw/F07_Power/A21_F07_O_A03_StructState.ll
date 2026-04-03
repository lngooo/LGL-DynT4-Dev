%struct.wB = type { i32, i32, i32 }
@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @r(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca %struct.wB
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %7 = getelementptr inbounds %struct.wB, %struct.wB* %5, i32 0, i32 0
  %8 = load i32, i32* %3
  store i32 %8, i32* %7
  %9 = getelementptr inbounds %struct.wB, %struct.wB* %5, i32 0, i32 1
  %10 = load i32, i32* %4
  store i32 %10, i32* %9
  %11 = getelementptr inbounds %struct.wB, %struct.wB* %5, i32 0, i32 2
  store i32 1, i32* %11
  br label %12
12:
  %13 = getelementptr inbounds %struct.wB, %struct.wB* %5, i32 0, i32 1
  %14 = load i32, i32* %13
  %15 = icmp sgt i32 %14, 0
  br i1 %15, label %16, label %36
16:
  %17 = getelementptr inbounds %struct.wB, %struct.wB* %5, i32 0, i32 1
  %18 = load i32, i32* %17
  %19 = srem i32 %18, 2
  %20 = icmp eq i32 %19, 1
  br i1 %20, label %21, label %27
21:
  %22 = getelementptr inbounds %struct.wB, %struct.wB* %5, i32 0, i32 0
  %23 = load i32, i32* %22
  %24 = getelementptr inbounds %struct.wB, %struct.wB* %5, i32 0, i32 2
  %25 = load i32, i32* %24
  %26 = mul nsw i32 %25, %23
  store i32 %26, i32* %24
  br label %27
27:
  %28 = getelementptr inbounds %struct.wB, %struct.wB* %5, i32 0, i32 0
  %29 = load i32, i32* %28
  %30 = getelementptr inbounds %struct.wB, %struct.wB* %5, i32 0, i32 0
  %31 = load i32, i32* %30
  %32 = mul nsw i32 %31, %29
  store i32 %32, i32* %30
  %33 = getelementptr inbounds %struct.wB, %struct.wB* %5, i32 0, i32 1
  %34 = load i32, i32* %33
  %35 = sdiv i32 %34, 2
  store i32 %35, i32* %33
  br label %12
36:
  %37 = getelementptr inbounds %struct.wB, %struct.wB* %5, i32 0, i32 2
  %38 = load i32, i32* %37
  ret i32 %38
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 3
  br i1 %7, label %8, label %9
8:
  store i32 1, i32* %3
  br label %20
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @atoi(i8* %12)
  %14 = load i8**, i8*** %5
  %15 = getelementptr inbounds i8*, i8** %14, i64 2
  %16 = load i8*, i8** %15
  %17 = call i32 @atoi(i8* %16)
  %18 = call i32 @r(i32 %13, i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %20
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
declare i32 @printf(i8*, ...)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i64 @strtol(i8*, i8**, i32)
