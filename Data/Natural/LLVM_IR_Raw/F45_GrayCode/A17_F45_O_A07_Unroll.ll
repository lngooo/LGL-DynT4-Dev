@.str = constant [3 x i8] c"%u\00"
define dso_local i32 @GrayCode(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 32
  br i1 %9, label %12, label %10
10:
  br label %86
12:
  %13 = load i32, i32* %2
  %14 = load i32, i32* %4
  %15 = lshr i32 %13, %14
  %16 = and i32 %15, 1
  %17 = load i32, i32* %2
  %18 = load i32, i32* %4
  %19 = add nsw i32 %18, 1
  %20 = lshr i32 %17, %19
  %21 = and i32 %20, 1
  %22 = icmp ne i32 %16, %21
  br i1 %22, label %23, label %28
23:
  %24 = load i32, i32* %4
  %25 = shl i32 1, %24
  %26 = load i32, i32* %3
  %27 = or i32 %26, %25
  store i32 %27, i32* %3
  br label %28
28:
  %29 = load i32, i32* %2
  %30 = load i32, i32* %4
  %31 = add nsw i32 %30, 1
  %32 = lshr i32 %29, %31
  %33 = and i32 %32, 1
  %34 = load i32, i32* %2
  %35 = load i32, i32* %4
  %36 = add nsw i32 %35, 2
  %37 = lshr i32 %34, %36
  %38 = and i32 %37, 1
  %39 = icmp ne i32 %33, %38
  br i1 %39, label %40, label %46
40:
  %41 = load i32, i32* %4
  %42 = add nsw i32 %41, 1
  %43 = shl i32 1, %42
  %44 = load i32, i32* %3
  %45 = or i32 %44, %43
  store i32 %45, i32* %3
  br label %46
46:
  %47 = load i32, i32* %2
  %48 = load i32, i32* %4
  %49 = add nsw i32 %48, 2
  %50 = lshr i32 %47, %49
  %51 = and i32 %50, 1
  %52 = load i32, i32* %2
  %53 = load i32, i32* %4
  %54 = add nsw i32 %53, 3
  %55 = lshr i32 %52, %54
  %56 = and i32 %55, 1
  %57 = icmp ne i32 %51, %56
  br i1 %57, label %58, label %64
58:
  %59 = load i32, i32* %4
  %60 = add nsw i32 %59, 2
  %61 = shl i32 1, %60
  %62 = load i32, i32* %3
  %63 = or i32 %62, %61
  store i32 %63, i32* %3
  br label %64
64:
  %65 = load i32, i32* %2
  %66 = load i32, i32* %4
  %67 = add nsw i32 %66, 3
  %68 = lshr i32 %65, %67
  %69 = and i32 %68, 1
  %70 = load i32, i32* %2
  %71 = load i32, i32* %4
  %72 = add nsw i32 %71, 4
  %73 = lshr i32 %70, %72
  %74 = and i32 %73, 1
  %75 = icmp ne i32 %69, %74
  br i1 %75, label %76, label %82
76:
  %77 = load i32, i32* %4
  %78 = add nsw i32 %77, 3
  %79 = shl i32 1, %78
  %80 = load i32, i32* %3
  %81 = or i32 %80, %79
  store i32 %81, i32* %3
  br label %82
82:
  br label %83
83:
  %84 = load i32, i32* %4
  %85 = add nsw i32 %84, 4
  store i32 %85, i32* %4
  br label %7
86:
  %87 = load i32, i32* %3
  ret i32 %87
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %7 = load i32, i32* %4
  %8 = icmp slt i32 %7, 2
  br i1 %8, label %9, label %10
9:
  store i32 0, i32* %3
  br label %21
10:
  %12 = load i8**, i8*** %5
  %13 = getelementptr inbounds i8*, i8** %12, i64 1
  %14 = load i8*, i8** %13
  %15 = call i64 @strtoul(i8* %14, i8** null, i32 10)
  %16 = trunc i64 %15 to i32
  store i32 %16, i32* %6
  %17 = load i32, i32* %6
  %18 = call i32 @GrayCode(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
