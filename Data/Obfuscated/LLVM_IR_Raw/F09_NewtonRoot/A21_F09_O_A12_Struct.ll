%struct.Uz = type { i64, i64 }
@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @Pc7(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca %struct.Uz
  %5 = alloca i64
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp slt i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i32 -1, i32* %2
  br label %54
9:
  %11 = getelementptr inbounds %struct.Uz, %struct.Uz* %4, i32 0, i32 0
  %12 = load i32, i32* %3
  %13 = sext i32 %12 to i64
  store i64 %13, i64* %11
  %14 = getelementptr inbounds %struct.Uz, %struct.Uz* %4, i32 0, i32 1
  %15 = load i32, i32* %3
  %16 = sext i32 %15 to i64
  store i64 %16, i64* %14
  %17 = load i32, i32* %3
  %18 = icmp sge i32 %17, 2
  br i1 %18, label %19, label %49
19:
  %21 = getelementptr inbounds %struct.Uz, %struct.Uz* %4, i32 0, i32 0
  %22 = load i64, i64* %21
  %23 = getelementptr inbounds %struct.Uz, %struct.Uz* %4, i32 0, i32 1
  %24 = load i64, i64* %23
  %25 = getelementptr inbounds %struct.Uz, %struct.Uz* %4, i32 0, i32 0
  %26 = load i64, i64* %25
  %27 = sdiv i64 %24, %26
  %28 = add nsw i64 %22, %27
  %29 = ashr i64 %28, 1
  store i64 %29, i64* %5
  br label %30
30:
  %31 = load i64, i64* %5
  %32 = getelementptr inbounds %struct.Uz, %struct.Uz* %4, i32 0, i32 0
  %33 = load i64, i64* %32
  %34 = icmp slt i64 %31, %33
  br i1 %34, label %35, label %47
35:
  %36 = load i64, i64* %5
  %37 = getelementptr inbounds %struct.Uz, %struct.Uz* %4, i32 0, i32 0
  store i64 %36, i64* %37
  %38 = getelementptr inbounds %struct.Uz, %struct.Uz* %4, i32 0, i32 0
  %39 = load i64, i64* %38
  %40 = getelementptr inbounds %struct.Uz, %struct.Uz* %4, i32 0, i32 1
  %41 = load i64, i64* %40
  %42 = getelementptr inbounds %struct.Uz, %struct.Uz* %4, i32 0, i32 0
  %43 = load i64, i64* %42
  %44 = sdiv i64 %41, %43
  %45 = add nsw i64 %39, %44
  %46 = ashr i64 %45, 1
  store i64 %46, i64* %5
  br label %30
47:
  br label %49
49:
  %50 = getelementptr inbounds %struct.Uz, %struct.Uz* %4, i32 0, i32 0
  %51 = load i64, i64* %50
  %52 = trunc i64 %51 to i32
  store i32 %52, i32* %2
  br label %54
54:
  %55 = load i32, i32* %2
  ret i32 %55
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 1, i32* %3
  br label %16
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @atoi(i8* %12)
  %14 = call i32 @Pc7(i32 %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %14)
  store i32 0, i32* %3
  br label %16
16:
  %17 = load i32, i32* %3
  ret i32 %17
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
