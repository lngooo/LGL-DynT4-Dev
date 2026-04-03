@.str = constant [3 x i8] c"%d\00"
define dso_local i32 @bl6(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %2
  %9 = load i8*, i8** %2
  %10 = call i64 @strlen(i8* %9)
  %11 = trunc i64 %10 to i32
  store i32 %11, i32* %3
  store i32 0, i32* %4
  store i32 1, i32* %5
  %15 = load i32, i32* %3
  %16 = sub nsw i32 %15, 1
  store i32 %16, i32* %6
  br label %17
17:
  %18 = load i32, i32* %6
  %19 = icmp sge i32 %18, 0
  br i1 %19, label %22, label %20
20:
  br label %53
22:
  %24 = load i8*, i8** %2
  %25 = load i32, i32* %6
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  %28 = load i8, i8* %27
  %29 = sext i8 %28 to i32
  %30 = or i32 %29, 32
  store i32 %30, i32* %7
  %31 = load i32, i32* %7
  %32 = icmp sge i32 %31, 97
  br i1 %32, label %33, label %37
33:
  %34 = load i32, i32* %7
  %35 = sub nsw i32 %34, 97
  %36 = add nsw i32 %35, 10
  br label %40
37:
  %38 = load i32, i32* %7
  %39 = sub nsw i32 %38, 48
  br label %40
40:
  %41 = phi i32 [ %36, %33 ], [ %39, %37 ]
  store i32 %41, i32* %7
  %42 = load i32, i32* %7
  %43 = load i32, i32* %5
  %44 = mul nsw i32 %42, %43
  %45 = load i32, i32* %4
  %46 = add nsw i32 %45, %44
  store i32 %46, i32* %4
  %47 = load i32, i32* %5
  %48 = mul nsw i32 %47, 16
  store i32 %48, i32* %5
  br label %50
50:
  %51 = load i32, i32* %6
  %52 = add nsw i32 %51, -1
  store i32 %52, i32* %6
  br label %17
53:
  %54 = load i32, i32* %4
  ret i32 %54
}
declare i64 @strlen(i8*)
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
  store i32 0, i32* %3
  br label %15
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @bl6(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
