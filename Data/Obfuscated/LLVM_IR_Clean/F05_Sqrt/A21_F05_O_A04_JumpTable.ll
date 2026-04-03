@__const.EHZ.cht = constant [2 x i8*] [i8* blockaddress(@EHZ, %16), i8* blockaddress(@EHZ, %44)]
define dso_local i32 @EHZ(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i64
  %7 = alloca [2 x i8*]
  %8 = alloca i64
  store i32 %0, i32* %3
  %9 = load i32, i32* %3
  %10 = icmp slt i32 %9, 0
  br i1 %10, label %11, label %12
11:
  store i32 -1, i32* %2
  br label %47
12:
  store i64 0, i64* %4
  %13 = load i32, i32* %3
  %14 = sext i32 %13 to i64
  store i64 %14, i64* %5
  store i64 0, i64* %6
  br label %16
16:
  %17 = load i64, i64* %4
  %18 = load i64, i64* %5
  %19 = icmp sle i64 %17, %18
  br i1 %19, label %20, label %43
20:
  %21 = load i64, i64* %4
  %22 = load i64, i64* %5
  %23 = load i64, i64* %4
  %24 = sub nsw i64 %22, %23
  %25 = sdiv i64 %24, 2
  %26 = add nsw i64 %21, %25
  store i64 %26, i64* %8
  %27 = load i64, i64* %8
  %28 = load i64, i64* %8
  %29 = mul nsw i64 %27, %28
  %30 = load i32, i32* %3
  %31 = sext i32 %30 to i64
  %32 = icmp sle i64 %29, %31
  br i1 %32, label %33, label %37
33:
  %34 = load i64, i64* %8
  store i64 %34, i64* %6
  %35 = load i64, i64* %8
  %36 = add nsw i64 %35, 1
  store i64 %36, i64* %4
  br label %40
37:
  %38 = load i64, i64* %8
  %39 = sub nsw i64 %38, 1
  store i64 %39, i64* %5
  br label %40
40:
  %41 = getelementptr inbounds [2 x i8*], [2 x i8*]* %7, i64 0, i64 0
  %42 = load i8*, i8** %41
  br label %49
43:
  br label %44
44:
  %45 = load i64, i64* %6
  %46 = trunc i64 %45 to i32
  store i32 %46, i32* %2
  br label %47
47:
  %48 = load i32, i32* %2
  ret i32 %48
49:
  %50 = phi i8* [ %42, %40 ]
  indirectbr i8* %50, [label %16, label %44]
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
